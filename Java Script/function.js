        const product2 = {
            name: 'shirt',
            'delivery-time': '1 day',
            rating: {
                stars: 4.5,
                count: 87
            },
            fun: function function1() {
                console.log('function inside object');
            }
        };
        console.log(product2);
        console.log(product2.name);
        console.log(product2['name']);
        console.log(product2['delivery-time']);
        console.log(product2.rating);
        product2.fun();
        console.log(typeof console.log);

        console.log(JSON.stringify(product2));